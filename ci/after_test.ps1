$test_results_path = ".\TestRunner_results.xml"
$wc = new-object net.webclient
$endpoint = "https://ci.appveyor.com/api/testresults/junit/$($env:APPVEYOR_JOB_ID)"

$(wc).UploadFile($(endpoint), (Resolve-Path $(test_results_path)))
