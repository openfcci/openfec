<?php

/**
 * /dates/ operations for OpenFEC API.
 * https://api.open.fec.gov/developers/#!/dates
 */

/**
 * Operation: '/calendar-dates/'
 * @see https://api.open.fec.gov/developers/#!/dates/get_calendar_dates
 */
function _openfec_api_get_calendar_dates() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/calendar-dates/'
        $response = $openfec_api->call("/calendar-dates/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/calendar-dates/export/'
 * @see https://api.open.fec.gov/developers/#!/dates/get_calendar_dates_export
 */
function _openfec_api_get_calendar_dates_export() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/calendar-dates/export/'
        $response = $openfec_api->call("/calendar-dates/export/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/election-dates/'
 * @see https://api.open.fec.gov/developers/#!/dates/get_election_dates
 */
function _openfec_api_get_election_dates() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/election-dates/'
        $response = $openfec_api->call("/election-dates/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}

/**
 * Operation: '/reporting-dates/'
 * @see https://api.open.fec.gov/developers/#!/dates/get_reporting_dates
 */
function _openfec_api_get_reporting_dates() {
    require_once(dirname(__DIR__) . '/api.php'); // OpenFEC api
    $openfec_api = new OpenFECAPI();

    if (!empty($openfec_api)) {
        // Do the API call to '/reporting-dates/'
        $response = $openfec_api->call("/reporting-dates/");
        if (!empty($response)) {
            return $response;
        }
    }
    return FALSE;
}
