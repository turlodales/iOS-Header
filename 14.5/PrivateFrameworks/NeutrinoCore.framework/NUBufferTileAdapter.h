//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUBufferTile-Protocol.h>

@class NSString;
@protocol NUBuffer;

@interface NUBufferTileAdapter : NSObject <NUBufferTile>
{
    CDStruct_996ac03c _frameRect;
    CDStruct_996ac03c _contentRect;
    id <NUBuffer> _buffer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <NUBuffer> buffer; // @synthesize buffer=_buffer;
@property(readonly, nonatomic) CDStruct_996ac03c contentRect; // @synthesize contentRect=_contentRect;
@property(readonly, nonatomic) CDStruct_996ac03c frameRect; // @synthesize frameRect=_frameRect;
- (id)init;
- (id)initWithFrameRect:(CDStruct_996ac03c)arg1 contentRect:(CDStruct_996ac03c)arg2 buffer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

