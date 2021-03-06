//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString;

@interface SACFAbstractClientCommand : SADomainCommand
{
}

+ (id)abstractClientCommandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)abstractClientCommand;
- (_Bool)requiresResponse;
@property(nonatomic) _Bool shouldRestartContext;
@property(nonatomic) _Bool shouldCacheScript;
@property(nonatomic) _Bool shouldCacheBytecode;
@property(copy, nonatomic) NSString *jsScript;
@property(copy, nonatomic) NSString *jsParameters;
@property(copy, nonatomic) NSArray *jsLibraries;
@property(copy, nonatomic) NSString *jsFileNameSuffix;
@property(copy, nonatomic) NSString *domain;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

