//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelRequest.h>

@class MPModelStaticResponse;

@interface MPModelStaticRequest : MPModelRequest
{
    MPModelStaticResponse *_staticResponse;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) MPModelStaticResponse *staticResponse; // @synthesize staticResponse=_staticResponse;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

