//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, NSURL;

@interface SAScreenActionInfo : SADomainObject
{
}

+ (id)infoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)info;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSURL *type;
@property(copy, nonatomic) NSURL *semanticId;
@property(copy, nonatomic) NSString *semanticData;
@property(copy, nonatomic) NSString *language;
@property(copy, nonatomic) NSArray *examples;
@property(copy, nonatomic) NSString *elementId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

