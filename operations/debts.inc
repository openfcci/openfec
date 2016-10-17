<?php

/**
 * /debts/ operations for OpenFEC API.
 * https://api.open.fec.gov/developers/#!/debts
 */

/**
 * Operation: '/schedules/schedule_d/'
 * @see https://api.open.fec.gov/developers/#!/loans/get_schedules_schedule_d
 */
function _openfec_api_get_schedules_schedule_d() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_d/'
        $response = $openfec_api->call("/schedules/schedule_d/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/schedules/schedule_d/{sub_id}/'
 * @see https://api.open.fec.gov/developers/#!/loans/get_schedules_schedule_d_sub_id
 */
function _openfec_api_get_schedules_schedule_d_sub_id($sub_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_d/{sub_id}/'
        $response = $openfec_api->call("/schedules/schedule_d/{$sub_id}/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}
