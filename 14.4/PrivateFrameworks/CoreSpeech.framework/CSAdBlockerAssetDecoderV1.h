//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

@interface CSAdBlockerAssetDecoderV1 : NSObject
{
    float _maxFingerprintBufferSize;
    NSMutableDictionary *_shouldResetAdsDictionary;
    NSData *_payloadData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *payloadData; // @synthesize payloadData=_payloadData;
@property(readonly, nonatomic) NSMutableDictionary *shouldResetAdsDictionary; // @synthesize shouldResetAdsDictionary=_shouldResetAdsDictionary;
@property(readonly, nonatomic) float maxFingerprintBufferSize; // @synthesize maxFingerprintBufferSize=_maxFingerprintBufferSize;
- (id)initWithData:(id)arg1;

@end

