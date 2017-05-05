//
// Created by anders on 5/5/17.
//

#ifndef STOCKFISH_SDFSD_H
#define STOCKFISH_SDFSD_H

namespace stockfishMock {
void evaluate(std::string fen) {
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

  UCI::loopHandlerToGetScore(fen);
  //UCI::loop(argc, argv);
  //UCI::loopHandlerToGetScore("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1");

  Threads.exit();
}
}

#endif //STOCKFISH_SDFSD_H
