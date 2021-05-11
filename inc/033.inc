    <div class="tip" name="33">
      If you want to display the result of your query in HTML,
      using the <code>-T table_options</code> or <code>--table-attr
      table_options</code> will allow you to specify options in the
      HTML table tag.
      <pre><code class=
      "hljs bash">laetitia:~$ psql -c 'select * from test;' -H -T class=\"myAwesomeTableClass\"
&lt;table border="1" class="myAwesomeTableClass"&gt;
  &lt;tr&gt;
    &lt;th align="center"&gt;id&lt;/th&gt;
    &lt;th align="center"&gt;value&lt;/th&gt;
  &lt;/tr&gt;
  &lt;tr valign="top"&gt;
    &lt;td align="right"&gt;1&lt;/td&gt;
    &lt;td align="left"&gt;test&lt;/td&gt;
  &lt;/tr&gt;
&lt;/table&gt;
&lt;p&gt;(1 row)&lt;br /&gt;
&lt;/p&gt;</code></pre>This feature is available since at least
Postgres 7.1.
    </div>
