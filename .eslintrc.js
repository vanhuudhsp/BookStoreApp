module.exports = {
  "plugins": ["react", "disable"],
  "processor": "disable/disable",
  "overrides": [
    {
      "files": ["tests/**/*.test.js"],
      "settings": {
        "disable/plugins": ["react"]
      }
    }
  ]
};
