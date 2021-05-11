    <div class="tip" name="21">
      Use the <code>-H</code> or <code>--html</code> flag to get
      the query result in HTML format.
      <pre><code class=
      "hljs bash">laetitia:~$ psql -H -c 'select * from test;'
&lt;table border="1"&gt;
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
