#import "NSObject.h"

#import "NSSharingServiceDelegate.h"
#import "NSSharingServicePickerDelegate.h"

@class MSContentDrawView, MSLayer, NSString, NSWindow;

@interface MSShareButtonHandler : NSObject <NSSharingServiceDelegate, NSSharingServicePickerDelegate>
{
    NSWindow *_window;
    MSLayer *_sliceLayer;
    MSContentDrawView *_canvas;
}

@property(nonatomic) __weak MSContentDrawView *canvas; // @synthesize canvas=_canvas;
@property(retain, nonatomic) MSLayer *sliceLayer; // @synthesize sliceLayer=_sliceLayer;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (id)itemsFromSlice:(id)arg1;
- (void)showShareMenuForLayer:(id)arg1 sender:(id)arg2 canvas:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

