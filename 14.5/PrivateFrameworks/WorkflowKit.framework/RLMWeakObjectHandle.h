//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class RLMObjectBase;

@interface RLMWeakObjectHandle : NSObject <NSCopying>
{
    struct BasicRow<realm::Table> _row;
    struct RLMClassInfo *_info;
    Class _objectClass;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) RLMObjectBase *object;
- (id)initWithObject:(id)arg1;

@end

