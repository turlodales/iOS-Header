//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoProcessing/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;

@interface VCPFaceGeometry : NSObject <NSSecureCoding>
{
    MISSING_TYPE **_vertices;
    unsigned long long _vertexCount;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) const MISSING_TYPE **vertices;
- (id)initWithVertices:(const MISSING_TYPE **)arg1 vertexCount:(unsigned long long)arg2;

@end

