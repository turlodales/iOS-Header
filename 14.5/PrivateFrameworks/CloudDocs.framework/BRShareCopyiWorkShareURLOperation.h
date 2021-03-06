//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class CKShare, NSString;

@interface BRShareCopyiWorkShareURLOperation : BROperation
{
    CKShare *_share;
    NSString *_appName;
    CDUnknownBlockType _shareCopyURLCompletionBlock;
}

+ (id)iWorkShareableExtensions;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType shareCopyURLCompletionBlock; // @synthesize shareCopyURLCompletionBlock=_shareCopyURLCompletionBlock;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithShare:(id)arg1 documentType:(id)arg2;
- (id)initWithShare:(id)arg1 appName:(id)arg2;

@end

