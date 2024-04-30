#include<iostream>
#include<sstream>
#include<stdexcept>
#include<string>
#include <algorithm>

#include "singlelink.hpp"

SingleLink::SingleLink(int dat){
  Node* N = new Node(dat);
  head_ = N;
  tail_ = N;
}

void SingleLink::append_back(int data){
  Node* N = new Node(data);
  if(tail_ == nullptr){
    tail_ = N;
    head_ = N;
  }else{
    tail_->next_ = N;
    tail_ = N;

  }

}

std::ostream& operator<<(std::ostream &out, const SingleLink &s){
  Node* curr = s.head_;
  while(curr !=nullptr){
    out << curr->data_ ;
    curr = curr->next_; 
    if(curr !=nullptr){
      out << ", ";
    }
  }
  return out;
}

bool SingleLink::del(int val){
  
  if(head_ != nullptr && head_->data_ == val){
    if(tail_ == head_){
      tail_ = tail_->next_;
    }
    Node* temp = head_;
    head_ = head_->next_;
    delete temp;
    return true;
  }

  Node* curr = head_;
  while(curr !=nullptr && curr->next_ != nullptr &&  curr->next_->data_ != val){
    curr = curr->next_; 
  }

  if(curr->next_  != nullptr){
    if(curr->next_ == tail_){
      tail_ = curr;
    }
    Node* temp = curr->next_;
    curr->next_ = curr->next_->next_;
    delete temp;
    return true;

  }else{
    return false;
  }

}

Node& SingleLink::operator[](size_t index){
  Node* curr = head_;

  for(size_t i=0; i<index;i++){
    if(curr == nullptr){
      throw std::out_of_range("out of range");
    }
    curr = curr->next_;
    
  }
  if(curr == nullptr){throw std::out_of_range("out of range");};
  return *curr;
}


SingleLink::~SingleLink(){
  Node* curr = head_;
  while(curr!=nullptr){
    Node* temp = curr->next_;
    delete curr;
    curr = temp;
  }
 }

SingleLink::SingleLink(const SingleLink &s){
  
  Node* f_curr = s.head_;
  if(f_curr == nullptr){
    return ;
  }
  
  

  Node* t_curr = new Node(f_curr->data_);
  head_ = t_curr;
  
  

  while(f_curr != nullptr && f_curr->next_!=nullptr){
    t_curr->next_ = new Node(f_curr->next_->data_);
    t_curr = t_curr->next_;
    f_curr = f_curr->next_;
  }
  tail_ = t_curr;
  }

SingleLink& SingleLink::operator=(const SingleLink& s ){

  SingleLink* s2 = new SingleLink();

  Node* f_curr = s.head_;
  if(f_curr == nullptr){
    return *s2;
  }
  
  

  Node* t_curr = new Node(f_curr->data_);
  s2->head_ = t_curr;
  
  

  while(f_curr != nullptr && f_curr->next_!=nullptr){
    t_curr->next_ = new Node(f_curr->next_->data_);
    t_curr = t_curr->next_;
    f_curr = f_curr->next_;
  }
  s2->tail_ = t_curr;

  return *s2;

}
