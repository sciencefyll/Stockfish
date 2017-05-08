//
// Created by anders on 5/5/17.
//

#ifndef STOCKFISH_SDFSD_H
#define STOCKFISH_SDFSD_H


#include <iostream>

#include "stockfish/bitboard.h"
#include "stockfish/position.h"
#include "stockfish/search.h"
#include "stockfish/thread.h"
#include "stockfish/tt.h"
#include "stockfish/uci.h"
#include "stockfish/syzygy/tbprobe.h"
#include "stockfish/timeman.h"


namespace PSQT {
void init();
}

namespace stockfishMock {

void resetStockfish() {
  //TT.clear();
  //::Search::clear();
  Time = TimeManagement();
  Options.clear();
  //Limits = ::Search::LimitsType();
  //Signals = ::Search::SignalsType();
}

int evaluate(std::string fen) {
  UCI::init(Options);
  PSQT::init();
  Bitboards::init();
  Position::init();
  Bitbases::init();
  Search::init();
  Pawns::init();
  Threads.init();
  Tablebases::init(Options["SyzygyPath"]);
  TT.resize(Options["Hash"]);

  int score = UCI::loopHandlerToGetScore(fen);
  //UCI::loop(argc, argv);
  //UCI::loopHandlerToGetScore("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1");

  Threads.exit();
  resetStockfish();

  return score;
}
}

#endif //STOCKFISH_SDFSD_H
