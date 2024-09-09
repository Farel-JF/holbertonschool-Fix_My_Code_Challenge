###
# Sort integer arguments (ascending)
###

# Filter and convert the ARGV arguments to integers
result = ARGV.select { |arg| arg =~ /^-?\d+$/ }.map(&:to_i)

# Sort the array in ascending order
result.sort!

# Output the sorted result
puts result
