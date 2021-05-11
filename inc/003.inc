    <div class="tip" name="3">
      With the <code>--csv</code> flag, psql will display the
      result as a csv file.
      <pre><code class=
      "hljs bash">psql --csv -c 'select * from test;'
id,value
1,test</code></pre>This feature is available since Postgres 12.
    </div>
