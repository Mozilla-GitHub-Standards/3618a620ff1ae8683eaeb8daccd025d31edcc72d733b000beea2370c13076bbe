<?php
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

// Add this folder to the include path
set_include_path(implode(PATH_SEPARATOR, array(
    dirname(__FILE__),
    get_include_path()
)));

require_once("CONSTANTS.inc");
?>