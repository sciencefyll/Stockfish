
#include <iostream>

#include "stockfish/bitboard.h"
#include "stockfish/position.h"
#include "stockfish/search.h"
#include "stockfish/thread.h"
#include "stockfish/tt.h"
#include "stockfish/uci.h"
#include "stockfish/syzygy/tbprobe.h"
#include "stockfish/timeman.h"
#include "stockfish/stockfishMock.h"

int ::stockfishMock::evaluate(std::string fen) {
  UCI::init(Options);
  PSQT::init();
  Bitboards::init();
  Position::init();
  Bitbases::init();
  //Search::init();
  Pawns::init();
  Threads.init();
  //Tablebases::init(Options["SyzygyPath"]);
  //TT.resize(Options["Hash"]);

  int score = UCI::loopHandlerToGetScore(fen);
  //UCI::loop(argc, argv);
  //UCI::loopHandlerToGetScore("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1");

  Threads.exit();
  Time = TimeManagement();
  Options.clear();

  return score;
}