//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsUI/_UIDocumentPickerURLContainerModel.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerSubfoldersContainerModel : _UIDocumentPickerURLContainerModel
{
    NSString *_containerID;
}

- (void).cxx_destruct;
- (id)scopes;
- (void)startMonitoringChanges;
- (id)_createObserver;
- (id)displayTitle;
- (_Bool)shouldShowTopLevelContainers;
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;
- (id)initWithPickableTypes:(id)arg1 container:(id)arg2;

@end

