//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PGTitle : NSObject
{
    NSString *_stringValue;
    long long _category;
}

+ (id)titleWithString:(id)arg1 category:(long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

