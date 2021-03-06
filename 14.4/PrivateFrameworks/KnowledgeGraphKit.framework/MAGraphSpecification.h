//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KnowledgeGraphKit/NSCopying-Protocol.h>

@class MAGraphReference;

@interface MAGraphSpecification : NSObject <NSCopying>
{
    long long _persistenceOptions;
    Class _defaultNodeClass;
    Class _defaultEdgeClass;
    MAGraphReference *_rootGraphReference;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MAGraphReference *rootGraphReference; // @synthesize rootGraphReference=_rootGraphReference;
@property(retain) Class defaultEdgeClass; // @synthesize defaultEdgeClass=_defaultEdgeClass;
@property(retain) Class defaultNodeClass; // @synthesize defaultNodeClass=_defaultNodeClass;
@property long long persistenceOptions; // @synthesize persistenceOptions=_persistenceOptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateEdgeClassesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateNodeClassesUsingBlock:(CDUnknownBlockType)arg1;
- (Class)edgeClassWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (Class)nodeClassWithLabel:(id)arg1 domain:(unsigned short)arg2;
- (id)init;

@end

