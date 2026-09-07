---
permalink: /
title: ""
excerpt: ""
author_profile: true
redirect_from: 
  - /about/
  - /about.html
---
<div class="terminal-greeting" role="presentation">
  <div class="terminal-greeting__bar">
    <span></span><span></span><span></span>
  </div>
  <div class="terminal-greeting__body">
    <p class="terminal-greeting__line terminal-greeting__question terminal-greeting__question--green"><span class="terminal-greeting__prompt">&gt;</span> HOW TO BUILD AGENTS?</p>
    <p class="terminal-greeting__line terminal-greeting__system"><span class="terminal-greeting__system-prompt">+</span> load memory.md</p>
    <p class="terminal-greeting__line terminal-greeting__rule">-----</p>
    <p class="terminal-greeting__line">Agents ...</p>
    <p class="terminal-greeting__line">Generalization ...</p>
    <p class="terminal-greeting__line terminal-greeting__rule">-----</p>
    <p class="terminal-greeting__line terminal-greeting__system"><span class="terminal-greeting__system-prompt">+</span> load skill building_agent/SKILL.md</p>
    <p class="terminal-greeting__line">Start with evals ... &lt;compressed 45 MB at /tmp/agents.txt&gt; You have created a loop. Now iterate on it. Hurray! Celebrate your wonderful agent.</p>
    <p class="terminal-greeting__line terminal-greeting__tool"><span class="terminal-greeting__prompt">&gt;</span> Calling tool RAG("ingredients for a better agent")</p>
    <p class="terminal-greeting__line terminal-greeting__chunk">&lt;chunk&gt;Celebrate your wonderful agent.&lt;/chunk&gt;</p>
    <p class="terminal-greeting__line terminal-greeting__system terminal-greeting__thinking">&lt;thinking&gt;💀&lt;/thinking&gt;</p>
    <p class="terminal-greeting__line terminal-greeting__tool"><span class="terminal-greeting__prompt">&gt;</span> Calling tool RAG("post-training alignment: SFT, reward modeling, preference optimization, evals")</p>
    <p class="terminal-greeting__line terminal-greeting__answer"><span class="terminal-greeting__prompt">&gt;</span> Complete CS336 Spring 2026 Assignment 5: Alignment.</p>
    <p class="terminal-greeting__line terminal-greeting__interrupt">^C KeyboardInterrupt</p>
    <p class="terminal-greeting__line terminal-greeting__question terminal-greeting__question--green"><span class="terminal-greeting__prompt">&gt;</span> Do generative models struggle at generalization?</p>
    <p class="terminal-greeting__line terminal-greeting__system"><span class="terminal-greeting__system-prompt">+</span> searching web ... CoInD</p>
    <p class="terminal-greeting__line terminal-greeting__system"><span class="terminal-greeting__system-prompt">+</span> fetching ... <strong>CoInD: Enabling Logical Compositions in Diffusion Models</strong></p>
    <p class="terminal-greeting__line terminal-greeting__answer">No. Vanilla generative models are trained to model the probability distribution of their training data, but that objective is not theoretically guaranteed to generalize to arbitrary logical compositions. CoInD shows why standard conditional diffusion models can fail the independence assumptions needed for compositional generation, and proposes enforcing independence between conditional marginals with Fisher divergence so models compose attributes more reliably.<span class="terminal-greeting__cursor"></span></p>
  </div>
</div>

<script>
  (function () {
    var terminal = document.querySelector(".terminal-greeting");
    if (!terminal) return;

    var lines = Array.prototype.slice.call(terminal.querySelectorAll(".terminal-greeting__line"));
    var originalLines = lines.map(function (line) {
      return line.innerHTML;
    });
    var lineDelay = 120;
    var charDelay = 10;
    var cursor = terminal.querySelector(".terminal-greeting__cursor");

    if (window.matchMedia && window.matchMedia("(prefers-reduced-motion: reduce)").matches) return;

    function restoreTerminal() {
      lines.forEach(function (line, index) {
        line.innerHTML = originalLines[index];
        line.style.visibility = "";
      });
      terminal.classList.remove("terminal-greeting--streaming");
    }

    if (cursor) {
      cursor.parentNode.removeChild(cursor);
    } else {
      cursor = document.createElement("span");
      cursor.className = "terminal-greeting__cursor";
    }

    terminal.classList.add("terminal-greeting--streaming");
    lines.forEach(function (line) {
      line.dataset.terminalHtml = line.innerHTML;
      line.innerHTML = "";
      line.style.visibility = "visible";
    });

    function sleep(ms) {
      return new Promise(function (resolve) {
        window.setTimeout(resolve, ms);
      });
    }

    async function streamNode(source, target) {
      if (source.nodeType === Node.TEXT_NODE) {
        var text = source.textContent;
        var textNode = document.createTextNode("");
        target.insertBefore(textNode, target === cursor.parentNode ? cursor : null);

        for (var i = 0; i < text.length; i += 1) {
          textNode.textContent += text.charAt(i);
          await sleep(charDelay);
        }
        return;
      }

      if (source.nodeType !== Node.ELEMENT_NODE) return;

      var clone = source.cloneNode(false);
      target.insertBefore(clone, target === cursor.parentNode ? cursor : null);

      var children = Array.prototype.slice.call(source.childNodes);
      for (var j = 0; j < children.length; j += 1) {
        await streamNode(children[j], clone);
      }
    }

    async function streamLine(line) {
      var template = document.createElement("template");
      template.innerHTML = line.dataset.terminalHtml;
      line.style.visibility = "visible";
      line.appendChild(cursor);

      var nodes = Array.prototype.slice.call(template.content.childNodes);
      for (var i = 0; i < nodes.length; i += 1) {
        await streamNode(nodes[i], line);
      }
    }

    async function streamTerminal() {
      for (var i = 0; i < lines.length; i += 1) {
        await streamLine(lines[i]);
        await sleep(lineDelay);
      }

      terminal.classList.remove("terminal-greeting--streaming");
    }

    streamTerminal().catch(restoreTerminal);
  }());
</script>

I’m a Machine Learning Engineer at [Splunk](https://www.splunk.com/), where I build the Splunk AI Assistant — turns out agents need engineers too. I graduated with a Master’s in Computer Science from Michigan State University, where my thesis focused on *Compositionality in Diffusion Models* under the supervision of [Dr. Vishnu Boddeti](http://vishnu.boddeti.net/). Prior to that, I earned my Bachelor’s degree from [IIT, Guwahati](https://www.iitg.ac.in/). 



{% include publications.html %}



## ☕  Apart from Research

🧑‍🏫 I love teaching. At Michigan State University, I taught [CSE 232](https://sachit3022.github.io/teaching/2023-fall) from Aug 2023 to May 2025 and [CSE 480](https://sachit3022.github.io/teaching/2023-summer) from May 2023 to Aug 2023.

⛳ I enjoy [running](https://sachit3022.github.io/other-blog/posts/running/) on rare sunny days on the East Coast. When the weather turns gloomy, I settle in with a cup of coffee ☕, pick up a [book](https://www.goodreads.com/user/show/112375149-gaudi-sachit), work through math problems, and occasionally revisit <a href="https://leetcode.com/u/sachit3022/"><s>LeetCode</s></a>.

<h3><img src="https://sachit3022.github.io/images/image.png" width="40" height="40" alt="Posts icon"> New Posts</h3>

<div style="display: grid; grid-template-columns: repeat(auto-fit, minmax(260px, 1fr)); gap: 16px; margin: 12px 0 26px;">
  <a href="https://sachit3022.github.io/other-blog/posts/adv_opt/" style="display: block; overflow: hidden; border: 1px solid #e5e7eb; border-radius: 6px; color: #24292f; text-decoration: none; background: #fff;">
    <img src="https://sachit3022.github.io/other-blog/posts/adv_opt/IMG_894ED9BDAD53-1.jpeg" alt="" style="display: block; width: 100%; height: 150px; object-fit: cover; object-position: center;">
    <span style="display: block; padding: 11px 12px 12px; font-size: 0.95rem; font-weight: 600; line-height: 1.35;">Solving an Adversarial Optimization Problem</span>
  </a>
  <a href="https://sachit3022.github.io/other-blog/posts/masters/" style="display: block; overflow: hidden; border: 1px solid #e5e7eb; border-radius: 6px; color: #24292f; text-decoration: none; background: #fff;">
    <img src="https://sachit3022.github.io/other-blog/posts/masters/teaser.png" alt="" style="display: block; width: 100%; height: 150px; object-fit: cover; object-position: center;">
    <span style="display: block; padding: 11px 12px 12px; font-size: 0.95rem; font-weight: 600; line-height: 1.35;">The Hitchhiker's Guide to a Master's in the US</span>
  </a>
</div>


<script>
  function scrollToSection(sectionId) {
    var element = document.getElementById(sectionId);
    if (element) {
      element.scrollIntoView({ behavior: 'smooth' });
    }
  }
</script>
