//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MCDependencyReader : NSObject
{
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSMutableDictionary *_memberQueueSystemDomainsDict;
    NSMutableDictionary *_memberQueueUserDomainsDict;
}

+ (id)sharedReader;
+ (void)setSystemStoragePath:(id)arg1 userStoragePath:(id)arg2;
+ (id)userStoragePath;
+ (id)systemStoragePath;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *memberQueueUserDomainsDict; // @synthesize memberQueueUserDomainsDict=_memberQueueUserDomainsDict;
@property(retain, nonatomic) NSMutableDictionary *memberQueueSystemDomainsDict; // @synthesize memberQueueSystemDomainsDict=_memberQueueSystemDomainsDict;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
- (void)invalidateCache;
- (void)memberQueueRereadUserDomainsDict;
- (void)memberQueueRereadSystemDomainsDict;
- (void)memberQueueRereadDomainsDict;
- (id)dependentsOfParent:(id)arg1 inUserDomain:(id)arg2;
- (id)dependentsOfParent:(id)arg1 inSystemDomain:(id)arg2;
- (id)parentsInUserDomain:(id)arg1;
- (id)parentsInSystemDomain:(id)arg1;
- (id)dependentsOfParent:(id)arg1 inDomain:(id)arg2;
- (id)parentsInDomain:(id)arg1;
- (id)memberQueueDependentsOfParent:(id)arg1 inUserDomain:(id)arg2;
- (id)memberQueueDependentsOfParent:(id)arg1 inSystemDomain:(id)arg2;
- (id)memberQueueDependentsOfParent:(id)arg1 inDomain:(id)arg2;
- (id)memberQueueParentsInUserDomain:(id)arg1;
- (id)memberQueueParentsInSystemDomain:(id)arg1;
- (id)memberQueueParentsInDomain:(id)arg1;
- (id)userDomainsDict;
- (id)systemDomainsDict;
- (id)_init;
- (id)init;

@end

