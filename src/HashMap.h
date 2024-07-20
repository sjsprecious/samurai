#ifndef HASHMAP_H_
#define HASHMAP_H_

#include <string>
#include <unordered_map>

class HashMap
{
 public:
  HashMap(void);
  std::string operator[](const std::string& key);
  bool insert(const std::string&, const std::string&);
  bool exists(const std::string&);
  bool update(const std::string&, const std::string&);

  std::unordered_map<std::string, std::string>* GetMap(void)
  {
    return &map_;
  }

 private:
  std::unordered_map<std::string, std::string> map_;
};

#endif  // HASHMAP_H_
