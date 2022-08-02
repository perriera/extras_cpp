/**
 * @brief the "MIT/X Consortium License", (adapted for EXPARX.COM)
 *
 * Copyright (C) November 22, 2021 EXPARX INCORPORATED
 *
 * Permission is hereby  granted,  free of charge,  to  any  person
 * obtaining a copy of this software and  associated  documentation
 * files   (the  "Software"),  to deal  in   the  Software  without
 * restriction, including  without  limitation the rights  to  use,
 * copy,  modify, merge,  publish,  distribute,  sublicense, and/or
 * sell copies of the  Software, and to permit persons  to whom the
 * Software  is  furnished to  do  so,  subject  to  the  following
 * conditions:
 *
 * (See LICENSE.md for complete details)
 *
 */

#include <iostream>
#include <extras_cpp/game/ChessGame.hpp>
#include <extras/docking/DockIt.hpp>

#include "../vendor/catch.hpp"
#include "../vendor/fakeit.hpp"

using namespace extras;
using namespace fakeit;

SCENARIO("Dock ChessGameInterface: toOctal", "[CHES-9]") {

    Dock<cpp::ChessGameInterface> dock;
    When(Method(dock, moves)).Return();

    cpp::ChessGameInterface& i = dock.get();
    i.moves();
    Verify(Method(dock, moves));
}