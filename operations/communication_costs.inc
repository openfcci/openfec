<?php

/**
 * /communication_costs/ operations for OpenFEC API.
 * https://api.open.fec.gov/developers/#!/communication_cost
 */

/**
 * Operation: '/committee/{committee_id}/communication_costs/by_candidate/'
 * @see https://api.open.fec.gov/developers/#!/communication_cost/get_committee_committee_id_communication_costs_by_candidate
 */
function _openfec_api_get_committee_committee_id_communication_costs_by_candidate($committee_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/communication_costs/by_candidate/'
        $response = $openfec_api->call("/committee/{$committee_id}/communication_costs/by_candidate/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/communication-costs/'
 * @see https://api.open.fec.gov/developers/#!/communication_cost/get_communication_costs
 */
function _openfec_api_get_communication_costs() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/communication-costs/'
        $response = $openfec_api->call("/communication-costs/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/communication_costs/by_candidate/'
 * @see https://api.open.fec.gov/developers/#!/communication_cost/get_communication_costs_by_candidate
 */
function _openfec_api_get_communication_costs_by_candidate() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/communication_costs/by_candidate/'
        $response = $openfec_api->call("/communication_costs/by_candidate/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}
