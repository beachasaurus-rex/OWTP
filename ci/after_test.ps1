$(test_results_path) = ".\TestRunner_results.xml"
$(wc) = new-object net.webclient
$(jobId) = $($env:APPVEYOR_JOB_ID)
$(endpoint) = "https://ci.appveyor.com/api/testresults/junit/$(jobId)"

$(wc).UploadFile($(endpoint), (Resolve-Path $(test_results_path)))
