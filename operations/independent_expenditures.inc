<?php

/**
 * /independent_expenditures/ operations for OpenFEC API.
 * https://api.open.fec.gov/developers/#!/independent_expenditures
 */

/**
 * Operation: '/committee/{committee_id}/schedules/schedule_e/by_candidate/'
 * @see https://api.open.fec.gov/developers/#!/independent_expenditures/get_committee_committee_id_schedules_schedule_e_by_candidate
 */
function _openfec_api_get_committee_committee_id_schedules_schedule_e_by_candidate($committee_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/committee/{committee_id}/schedules/schedule_e/by_candidate/'
        $response = $openfec_api->call("/committee/{$committee_id}/schedules/schedule_e/by_candidate/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/schedules/schedule_e/'
 * @see https://api.open.fec.gov/developers/#!/independent_expenditures/get_schedules_schedule_e
 */
function _openfec_api_get_schedules_schedule_e() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_e/'
        $response = $openfec_api->call("/schedules/schedule_e/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/schedules/schedule_e/by_candidate/'
 * @see https://api.open.fec.gov/developers/#!/independent_expenditures/get_schedules_schedule_e_by_candidate
 */
function _openfec_api_get_schedules_schedule_e_by_candidate() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_e/by_candidate/'
        $response = $openfec_api->call("/schedules/schedule_e/by_candidate/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}
