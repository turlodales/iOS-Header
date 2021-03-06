//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSURL;

@interface SSVPlaybackItem : NSObject
{
    NSDictionary *_itemDictionary;
    NSURL *_fallbackStreamingKeyServerURL;
    NSURL *_fallbackStreamingKeyCertificateURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *fallbackStreamingKeyCertificateURL; // @synthesize fallbackStreamingKeyCertificateURL=_fallbackStreamingKeyCertificateURL;
@property(copy, nonatomic) NSURL *fallbackStreamingKeyServerURL; // @synthesize fallbackStreamingKeyServerURL=_fallbackStreamingKeyServerURL;
@property(readonly, copy, nonatomic) NSDictionary *itemDictionary; // @synthesize itemDictionary=_itemDictionary;
- (void)_enumerateAssetsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, copy, nonatomic) id itemIdentifier;
@property(readonly, nonatomic, getter=isiTunesStoreStream) _Bool iTunesStoreStream;
@property(readonly, nonatomic) NSURL *HLSPlaylistURL;
@property(readonly, nonatomic) NSURL *HLSKeyServerURL;
@property(readonly, nonatomic) NSURL *HLSKeyCertificateURL;
@property(readonly, nonatomic) NSArray *assets;
- (id)assetForFlavor:(id)arg1;
- (id)initWithItemDictionary:(id)arg1;

@end

