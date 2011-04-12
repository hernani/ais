<?php
/**
 * @file
 * ais_server.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ais_server_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "services" && $api == "services") {
    return array("version" => 3);
  }
}
