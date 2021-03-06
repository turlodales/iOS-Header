//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPTransformOperation.h>

@class FPItem;

@interface FPUntrashOperation : FPTransformOperation
{
    FPItem *_restoreDirectory;
    CDUnknownBlockType _untrashCompletionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType untrashCompletionBlock; // @synthesize untrashCompletionBlock=_untrashCompletionBlock;
- (id)fp_prettyDescription;
- (void)presendNotifications;
- (void)postStitchingFinishWithResult:(id)arg1 error:(id)arg2;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithItems:(id)arg1 restoreDirectory:(id)arg2;
- (id)replicateForItems:(id)arg1;

@end

