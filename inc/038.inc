    <div class="tip" name="38">
      To unset a variable or to set a variable to an empty value in
      non interractive mode, use the <code>-v assignement</code> or
      <code>--set=assignement</code> or
      <code>--variable=assignement</code> flag and leave off the
      equal sign.
      <pre><code class=
      "hljs bash">laetitia:~$ psql -v var=value -c '\echo :var'
value
laetitia:~$ psql -v var= -c '\echo :var' </code></pre>This feature is available since at least Postgres 7.1.
    </div>
