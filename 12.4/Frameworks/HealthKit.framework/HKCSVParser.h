//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HKCSVParser : NSObject
{
}

+ (id)parseCSV:(id)arg1 error:(out id *)arg2;
+ (id)recordWithScanner:(id)arg1 error:(out id *)arg2;
+ (_Bool)newlineWithScanner:(id)arg1;
+ (id)fieldWithScanner:(id)arg1 error:(out id *)arg2;
+ (id)terminatingCharacterSet;
+ (id)newlineCharacterSet;
+ (id)quoteCharacterSet;
+ (id)commaCharacterSet;

@end

