//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface MFAttachmentCompositionContext : NSObject
{
    NSString *_contextID;
    NSURL *_attachmentsBaseURL;
}

@property(copy, nonatomic) NSURL *attachmentsBaseURL; // @synthesize attachmentsBaseURL=_attachmentsBaseURL;
@property(readonly, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
@property(readonly, nonatomic) NSArray *attachments;
- (id)initWithContextID:(id)arg1;
- (id)init;
- (void)dealloc;

@end

