//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _DKKnowledgeStorage;

@interface _DKSyncContext : NSObject
{
    NSString *_name;
    _DKKnowledgeStorage *_storage;
}

+ (id)new;
- (void).cxx_destruct;
@property(retain, nonatomic) _DKKnowledgeStorage *storage; // @synthesize storage=_storage;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1;
- (id)init;

@end

