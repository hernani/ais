<?php
/**
 * @file
 * ais_server.services.inc
 */

/**
 * Implementation of hook_default_services_endpoint().
 */
function ais_server_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass;
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'ais';
  $endpoint->title = 'AIS';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'ais';
  $endpoint->authentication = array();
  $endpoint->resources = array(
    'phone' => array(
      'alias' => '',
      'operations' => array(
        'retrieve' => array(
          'enabled' => 1,
        ),
      ),
      'actions' => array(
        'hierarchy' => array(
          'enabled' => 1,
        ),
      ),
    ),
  );
  $endpoint->debug = 0;
  $endpoint->status = 1;
  $export['ais'] = $endpoint;

  return $export;
}
