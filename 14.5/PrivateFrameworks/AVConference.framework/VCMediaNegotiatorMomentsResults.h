//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorMomentsResults : NSObject
{
    int _capabilities;
    int _imageType;
    int _videoCodec;
    int _multiwayCapabilities;
}

@property(nonatomic) int mulitwayCapabilities; // @synthesize mulitwayCapabilities=_multiwayCapabilities;
@property(nonatomic) int videoCodec; // @synthesize videoCodec=_videoCodec;
@property(nonatomic) int imageType; // @synthesize imageType=_imageType;
@property(nonatomic) int capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) unsigned int avcMomentsCapabilities;

@end

