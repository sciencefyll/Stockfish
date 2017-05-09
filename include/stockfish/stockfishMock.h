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
int evaluate(std::string fen);
}

#endif //STOCKFISH_SDFSD_H
