//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VCCaptionsTranscription;
@protocol VCCaptionsReceiverDelegate;

__attribute__((visibility("hidden")))
@interface VCCaptionsReceiver : NSObject
{
    unsigned int _captionsLastUtteranceNumber;
    unsigned int _captionsLastUpdateNumber;
    id _delegate;
    VCCaptionsTranscription *_currentTranscription;
    struct opaqueVCCaptionsDecoder *_captionsDecoder;
}

@property(retain, nonatomic) VCCaptionsTranscription *currentTranscription; // @synthesize currentTranscription=_currentTranscription;
- (void)processCaptionsData:(id)arg1;
@property(readonly) id <VCCaptionsReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

