//
//  QuickAddViewController.h
//  TripJournal
//
//  Created by Nathan Condell on 4/26/14.
//  Copyright (c) 2014 Nathan Condell. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import "Trip.h"
#import "Place.h"
#import "Memory.h"

@interface QuickAddViewController : UIViewController<UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITableViewDelegate>
@property (nonatomic, strong) Memory *selectedMemory;
@property (strong, nonatomic) IBOutlet UIImageView *imageView;
@property (strong, nonatomic) IBOutlet UITextField *name;
@property (strong, nonatomic) IBOutlet UITextField *description;
@property (nonatomic, strong) Trip *selectedTrip;
@property (strong, nonatomic) IBOutlet UILabel *tripName;
@property (strong, nonatomic) IBOutlet UILabel *tripDescription;
@property (strong, nonatomic) IBOutlet UIButton *setPlace;
@property (nonatomic, strong) Place *selectedPlace;
@property (strong, nonatomic) IBOutlet UILabel *placeName;
@property (strong, nonatomic) IBOutlet UILabel *placeDescription;
- (IBAction)unwindFromTripToQuick:(UIStoryboardSegue *)unwindSegue;
- (IBAction)unwindFromPlaceToQuick:(UIStoryboardSegue *)unwindSegue;
- (IBAction)useCameraRoll:(id)sender;
//- (IBAction)saveMemory:(id)sender;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *headBack;
@end
