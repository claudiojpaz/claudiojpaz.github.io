window.onload = function () {
  setTimeout(function () {
    var head = document.getElementsByTagName("head")[0], script;
    script = document.createElement("script");
    script.type = "text/x-mathjax-config";
    script[(window.opera ? "innerHTML" : "text")] =
      "MathJax.Hub.Config({\n" +
      "  tex2jax: { inlineMath: [['$','$'], ['\\\\(','\\\\)']] }\n" +
      "});"
    head.appendChild(script);
    script = document.createElement("script");
    script.type = "text/javascript";
    //script.src  = "/home/claudiojpaz/git/mathjax/MathJax.js?config=TeX-AMS-MML_HTML";
    script.src  = "http://cdn.mathjax.org/mathjax/latest/MathJax.js?config=TeX-AMS_HTML";
    head.appendChild(script);
  },100)
}
