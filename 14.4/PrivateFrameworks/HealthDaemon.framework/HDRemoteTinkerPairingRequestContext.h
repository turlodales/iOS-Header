//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDCodableTinkerPairingRequest;

__attribute__((visibility("hidden")))
@interface HDRemoteTinkerPairingRequestContext : NSObject
{
    HDCodableTinkerPairingRequest *_request;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) HDCodableTinkerPairingRequest *request; // @synthesize request=_request;

@end

