//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailServices/MSMailDefaultService.h>

@interface MSSaveEmail : MSMailDefaultService
{
}

+ (void)securityScopeForPlaceholderURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)deletePlaceholderAttachmentForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)placeholderAttachmentForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (void)saveEmail:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)saveMessageData:(id)arg1 forAccountWithID:(id)arg2 autosaveIdentifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)_saveMessageData:(id)arg1 forAccountWithID:(id)arg2 autosaveIdentifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_saveEmail:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

