//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IKJSRWIDependencyDomain : NSObject
{
    NSString *_identifier;
    Class _agentClass;
    NSDictionary *_types;
    NSDictionary *_commands;
    NSDictionary *_events;
}

+ (void)processDomains:(id)arg1;
+ (id)allDomains;
+ (id)domainAgentClassMap;
+ (id)allowedDomains;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *events; // @synthesize events=_events;
@property(readonly, nonatomic) NSDictionary *commands; // @synthesize commands=_commands;
@property(readonly, nonatomic) NSDictionary *types; // @synthesize types=_types;
@property(retain, nonatomic) Class agentClass; // @synthesize agentClass=_agentClass;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isValidForEventsWithError:(id *)arg1;
- (_Bool)isValidForTypesWithError:(id *)arg1;
- (_Bool)isValidForAgentWithError:(id *)arg1;
- (_Bool)isValidWithError:(id *)arg1;
@property(readonly, nonatomic) NSString *dispatcherClassString;
- (id)initWithDomainDictionary:(id)arg1 agentClass:(Class)arg2;

@end

