//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSMutableSet;

@interface SCNGeometryTessellator : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableSet *_clients;
    _Bool _adaptive;
    _Bool _screenSpace;
    float _maximumEdgeLength;
    float _edgeTessellationFactor;
    float _insideTessellationFactor;
    float _tessellationFactorScale;
    long long _smoothingMode;
    unsigned long long _partitionMode;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long tessellationPartitionMode;
@property(nonatomic) double maximumEdgeLength;
@property(nonatomic) double insideTessellationFactor;
@property(nonatomic) double edgeTessellationFactor;
@property(nonatomic) double tessellationFactorScale;
@property(nonatomic, getter=isScreenSpace) _Bool screenSpace;
- (_Bool)screenSpace;
@property(nonatomic, getter=isAdaptive) _Bool adaptive;
- (_Bool)adaptive;
@property(nonatomic) long long smoothingMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)tessellatorValueDidChangeForClient:(id)arg1;
- (CDStruct_14ccb760)_tessellatorValueForGeometry:(id)arg1;
- (void)tessellatorValueDidChange;
- (void)clientWillDie:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

