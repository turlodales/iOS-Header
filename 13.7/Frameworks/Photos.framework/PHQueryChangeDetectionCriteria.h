//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface PHQueryChangeDetectionCriteria : NSObject <NSCopying>
{
    NSMutableDictionary *_attributeIndexValuesByEntityName;
    NSMutableDictionary *_relationshipIndexValuesByEntityName;
}

- (void).cxx_destruct;
- (void)enumerateEntitiesAndRelationshipIndexesBlock:(CDUnknownBlockType)arg1;
- (void)enumerateEntitiesAndAttributeIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPLQueryChangeDetectionCriteria:(id)arg1;

@end

