//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DOCDownloadButtonBase, NSError;

@protocol DOCDownloadButtonDelegate <NSObject>
- (void)button:(DOCDownloadButtonBase *)arg1 didEncounterError:(NSError *)arg2;
- (void)buttonDidTapOpenButton:(DOCDownloadButtonBase *)arg1;
@end

