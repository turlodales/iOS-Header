//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTTextNormalizationRequest.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FTMutableTextNormalizationRequest : FTTextNormalizationRequest
{
}

@property(nonatomic) int nbest_variants_max;
@property(copy, nonatomic) NSString *text;
@property(copy, nonatomic) NSString *language;
@property(copy, nonatomic) NSString *session_id;
@property(copy, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

