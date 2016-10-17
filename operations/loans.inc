<?php

/**
 * /loans/ operations for OpenFEC API.
 * https://api.open.fec.gov/developers/#!/loans
 */

/**
 * Operation: '/schedules/schedule_c/'
 * @see https://api.open.fec.gov/developers/#!/loans/get_schedules_schedule_c
 */
function _openfec_api_get_schedules_schedule_c() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_c/'
        $response = $openfec_api->call("/schedules/schedule_c/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/schedules/schedule_c/{sub_id}/'
 * @see https://api.open.fec.gov/developers/#!/loans/get_schedules_schedule_c_sub_id
 */
function _openfec_api_get_schedules_schedule_c_sub_id($sub_id) {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/schedules/schedule_c/{sub_id}/'
        $response = $openfec_api->call("/schedules/schedule_c/{$sub_id}/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}
