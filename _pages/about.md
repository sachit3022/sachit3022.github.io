---
permalink: /
title: "About Me"
excerpt: "About me"
author_profile: true
redirect_from: 
  - /about/
  - /about.html
---
Hello! I am a final-year Masters Student in the [CSE Department](http://www.cse.msu.edu) at [Michigan State University](http://www.msu.edu/) pursuing my master's degree under the supervision of [Dr. Vishnu Boddeti](http://vishnu.boddeti.net/). I am extremely lucky to have amazing colleagues at [Human Analysis Lab](https://hal.cse.msu.edu/). I hold a bachelor's degree from [IIT, Guwahati](https://www.iitg.ac.in/). 


## 🎯 Research Objective
My primary research goal is to improve the generalization of machine learning systems. This can be summarized by the phrase, "You get what you train for." An incorrect objective will lead to poor generalization, even when a large amount of data is applied to a problem. My research focuses on defining the correct objectives, thereby improving the ability of machine learning models to generalize effectively.

For instance, current state-of-the-art generative models often fail to generate an image of "a red polar bear" or edit the color of a polar bear in an image without changing other aspects. Why do current SOTA models struggle? The objective of **diffusion models**, as discussed in my blog on their [probabilistic perspective](https://sachit3022.github.io/other-blog/posts/diffusion/), is to learn the probability of the observed data distribution. However, in the observational data, these seemingly independent concepts of color and animal structure are rather dependent. Therefore, if you are modeling the incorrect observational data, you are bound to get a model that is incorrect. In our ICLR 2025 submission (under review), we correct the training objective of diffusion models to reflect the independence that allows us to modify one attribute without affecting the others.

Classical machine learning algorithms are also prone to generalization problems. Models such as SVM and LDA rely on **spurious** features for classification. In [this](https://sachit3022.github.io/files/Pattern_Recognition.pdf) work, we provide a modified objective that is invariant to spurious features. This objective transforms the problem into a generalized eigenvalue problem with a closed-form solution. 

Algorithmic fairness is another area where an appropriate training objective should include a constraint on fairness, ensuring that models do not base decisions on sensitive attributes like gender. I have studied constrained optimization, and this work resulted in my research notes on [Constrained Optimization and Min-Max Problems](https://sachit3022.github.io/files/Optimisation.pdf). Additionally, I proposed a pre-processing adversarial pipeline to improve [fairness in LLMs](https://sachit3022.github.io/files/Fair_LLM.pdf). On a fun side, classic dynamic problems can be [formulated as constrained optimization](https://sachit3022.github.io/files/DP.pdf), and projected gradient descent can get you an approximate solution faster. 

I also care about the impact of ML and have worked on practical problems such as [how to train with large-scale multi-modal data with imbalance](https://sachit3022.github.io/files/Large%20scale%20predictive%20data.pdf). Also in [P-GPT](https://sachit3022.github.io/files/p_GPT.pdf), I strive to find the efficient configuration for training across multiple servers.

## 💀 Projects that did not materialize
I used to work on Adversarial Machine Learning. I'm no longer interested in this area, although the optimization techniques are useful; it's always a catch-up game. However, I have written a blog post on [How to solve an Adversarial Optimization Problem?](https://sachit3022.github.io/other-blog/posts/adv_opt/).
Also, Machine Unlearning: This involves removing training data from the model. I'm no longer interested in unlearning as I struggle to understand a metric to quantify it. However, we participated in the [NeurIPS 2023 challenge on Machine Unlearning](https://sachit3022.github.io/files/Unlearning.pdf)


## ☕  Apart from Research

🧑‍🏫 I teach programming ([CSE 232](https://sachit3022.github.io/teaching/2023-fall)) at Michigan State University. 

⛳  I enjoy [running](https://sachit3022.github.io/other-blog/posts/running/ ) on a rare sunny day in East Lansing, MI. On a gloomy day, I sit down with a sip of coffee ☕ and [Leetcode](https://leetcode.com/u/sachit3022/).  

💡 I love building products. Currently working on an [image editing tool](https://sachit3022.github.io/other-blog/posts/product/).


<h2>
  <img src="images/collaboration.png" width="40" height="40" alt="Collaboration Icon"> Collaborations
</h2>


<p><strong>If you're interested in my research, I'm always open to collaborations!</strong></p>

<h2>
  <img src="images/gs.png" width="40" height="40" alt="Collaboration Icon"> Publications under submission
</h2>


<p>If you're interested in my research, I'm always open to collaborations!</p>



<h2><img src="https://sachit3022.github.io/images/image.png" width="40" height="40">New Posts</h2>

<div style="display: flex; align-items: center;">
<div style="margin-left: 20px;">
<table style="border: none;">
<tr style="border: none;">
    <td style="border: none;"><img src="https://sachit3022.github.io/other-blog/posts/product/website-builder.png" alt="Image 1" width="150" height="150"> 
</td>
    <td style="border: none; color:red; font-family:Monospace; font-size:1.5em;"> <a href="https://sachit3022.github.io/other-blog/posts/product/ " style="color:#36AE7C;"> Notes on building a product.
</a>  </td>
</tr >
<tr style="border: none;">
    <td style="border: none; "><img src="../images/image-1.png" alt="Image 1" width="150" height="150"></td>
    <td style="border: none; font-family:Monospace; font-size:1.5em "> <a href="https://sachit3022.github.io/other-blog/posts/running/ " style="color:#36AE7C;">How Running Keeps Me Grounded.</a>  </td>
</tr >

</table>
</div>
</div>
