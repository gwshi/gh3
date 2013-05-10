<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN"
  "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
  <title>Jasmine Spec Runner | Gh3.js</title>

  <link rel="shortcut icon" type="image/png" href="lib/jasmine-1.2.0/jasmine_favicon.png">
  <link rel="stylesheet" type="text/css" href="lib/jasmine-1.2.0/jasmine.css">
  <script type="text/javascript" src="lib/jasmine-1.2.0/jasmine.js"></script>
  <script type="text/javascript" src="lib/jasmine-1.2.0/jasmine-html.js"></script>

  <!-- include source files here... -->
  <script src="../vendors/jquery-1.7.2.js"></script>
  <script src="../vendors/underscore.js"></script>
  <script src="../gh3.js"></script>

  <!-- include spec files here... -->
  <script src="spec/gh3Spec.js"></script>

  <script type="text/javascript">
    (function() {
      var jasmineEnv = jasmine.getEnv();
      jasmineEnv.updateInterval = 1000;

      var htmlReporter = new jasmine.HtmlReporter();

      jasmineEnv.addReporter(htmlReporter);

      jasmineEnv.specFilter = function(spec) {
        return htmlReporter.specFilter(spec);
      };

      var currentWindowOnload = window.onload;

      window.onload = function() {
        if (currentWindowOnload) {
          currentWindowOnload();
        }
        execJasmine();
      };

      function execJasmine() {
        jasmineEnv.execute();
      }

    })();
  </script>

</head>

<body>

      
      <tr> this is yunpeng added<tr>
      
</body>
</html>
